import random

def guess_number_game():
    # 生成1到100之间的随机数
    target_number = random.randint(1, 100)
    attempts = 0

    print("欢迎来到猜数字游戏!")
    print("我已经想好了一个1到100之间的数字。")

    while True:
        try:
            # 获取玩家的猜测
            guess = int(input("请猜一个数字: "))
            attempts += 1

            # 检查猜测是否正确
            if guess < target_number:
                print("太低了!再试一次。")
            elif guess > target_number:
                print("太高了!再试一次。")
            else:
                print(f"恭喜你!你猜对了。这个数字就是 {target_number}。")
                print(f"你总共猜了 {attempts} 次。")
                break
        except ValueError:
            print("请输入一个有效的数字。")

    # 询问是否再玩一次
    play_again = input("想再玩一次吗? (是/否): ").lower()
    return play_again == '是' or play_again == 'y'

# 主游戏循环
while True:
    if not guess_number_game():
        print("谢谢你玩我的游戏!再见!")
        break
