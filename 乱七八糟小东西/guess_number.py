import random

def guess_number_game():
    # ����1��100֮��������
    target_number = random.randint(1, 100)
    attempts = 0

    print("��ӭ������������Ϸ!")
    print("���Ѿ������һ��1��100֮������֡�")

    while True:
        try:
            # ��ȡ��ҵĲ²�
            guess = int(input("���һ������: "))
            attempts += 1

            # ���²��Ƿ���ȷ
            if guess < target_number:
                print("̫����!����һ�Ρ�")
            elif guess > target_number:
                print("̫����!����һ�Ρ�")
            else:
                print(f"��ϲ��!��¶��ˡ�������־��� {target_number}��")
                print(f"���ܹ����� {attempts} �Ρ�")
                break
        except ValueError:
            print("������һ����Ч�����֡�")

    # ѯ���Ƿ�����һ��
    play_again = input("������һ����? (��/��): ").lower()
    return play_again == '��' or play_again == 'y'

# ����Ϸѭ��
while True:
    if not guess_number_game():
        print("лл�����ҵ���Ϸ!�ټ�!")
        break
