#include <stdio.h>
int KLJDFSHDSKJLHFIUDHFUIHDIUOFHDFOIUFHVUIODFHFIUDFHFIUODFHUIFGHDFIUFHDFUIFHDIPOURHTFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFIHDTFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFITFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFISUIJFGBFDYIUHFGUIDFHGUIDFHGUIDFGKJHDF(int i, int j) {
	int num, k = 1;
	do {
		num = k * (i > j ? i : j);
		k++;
	} while (num % i != 0 || num % j != 0);
	return num;
}
int HDGFHHUIGFGRYUIGFYUREHYFUIHRE8YGHFUYFDHYGUFH8YSRHYUITHUOIREHTYOUIRYUITHDFYUFBYUHDBHJVBFHNVHDBHUFBHJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDDFHFUIDSHFUIRH(int i, int j) {
	int num, k = 1;
	do {
		num = (i > j ? j : i) / k;
		k++;
	} while (i % num != 0 || j % num != 0);
	return num;
}
int main() {
	int i, j;
	printf("请输入两个数：\n");
	scanf("%d %d", &i, &j);
	printf("最小公倍数是：%d, 最大公约数是：%d", KLJDFSHDSKJLHFIUDHFUIHDIUOFHDFOIUFHVUIODFHFIUDFHFIUODFHUIFGHDFIUFHDFUIFHDIPOURHTFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFIHDTFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFITFUIRDHGIUFDNGJIUDFSHGUIDRFHFOUIDHUIFDXHJNIUFGHSDIUFUHRDUITYUIRDYTIDRHRUIEOSHTYUIDSHGVJKCVBVJFCHJIFISUIJFGBFDYIUHFGUIDFHGUIDFHGUIDFGKJHDF(i, j), HDGFHHUIGFGRYUIGFYUREHYFUIHRE8YGHFUYFDHYGUFH8YSRHYUITHUOIREHTYOUIRYUITHDFYUFBYUHDBHJVBFHNVHDBHUFBHJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDJSDZBHFHIJSDHFUJNSDIJHFNHUJIDCBFHJKDNJKFNDJKFNMCJKXNJKCNMJXKFNUIHJSDHUIFHSUDIFNBIUHJDRFHFGIUOJHHSDJIFHHUISDHFIJUHSUIJHDFIJSDHJIFHSDUIJFHUSDIJHFUIDDFHFUIDSHFUIRH(i, j));
	return 0;
}
