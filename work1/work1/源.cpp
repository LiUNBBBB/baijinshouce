#include <WinSock2.h>
#include <windows.h>
#include <stdio.h>
#include <mysql.h>

int main()
{
	MYSQL *conn;
	const char *server = "localhost";//���ݿ������
	const char *user = "root";//��¼�û���
	const char *password = "liu980511";//��¼����
	const char *database = "mysql";//���ݿ���
	conn = mysql_init(NULL);//��ʼ��
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
		printf("����ʧ�ܣ�%sn", mysql_error(conn));
	else
		printf("���ӳɹ���");
	getchar();
	return 0;
}
