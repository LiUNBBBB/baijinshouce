//#include <WinSock2.h>
//#include <windows.h>
//#include <stdio.h>
//#include <mysql.h>
//
//
//MYSQL_RES *res;
//MYSQL_ROW row;
//MYSQL *conn;
//const char *sql;
////���ݿ�����
//void fconn() {
//	const char *server = "localhost";//���ݿ������
//	const char *user = "root";//��¼�û���
//	const char *password = "liu980511";//��¼����
//	const char *database = "bjsc";//���ݿ���
//	conn = mysql_init(NULL);//��ʼ��
//	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
//		printf("����ʧ�ܣ�%sn", mysql_error(conn));
//	else
//		printf("���ӳɹ���\n");
//
//}
////���ݿ��ѯ
//void fquery() {
//	mysql_set_character_set(conn, "gbk");
//	sql = "select * from test_mysql";
//	mysql_query(conn, sql);
//	res = mysql_use_result(conn);
//	while ((row = mysql_fetch_row(res))) {
//		printf("%s\t%s\t%s\n", row[0], row[1], row[2]);
//	}
//	mysql_free_result(res);
//	mysql_close(conn);
//}
////��������
//void fadd() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "insert into test_mysql(name,content) values('���������','���������')";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("������ӳɹ�\n");
//	}
//	else {
//		printf("�������ʧ��\n");
//	}
//}
////�޸�����
//void fupdate() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "update test_mysql set content='�޸ĺ������' where id='3'";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("�����޸ĳɹ�\n");
//	}
//	else {
//		printf("�����޸�ʧ��\n");
//	}
//}
////ɾ������
//void fdelete() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "delete from test_mysql where id='3'";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("����ɾ���ɹ�\n");
//	}
//	else {
//		printf("����ɾ��ʧ��\n");
//	}
//}
//int main()
//{
//	void fconn();
//	void fquery();
//	void fadd();
//	void fupdate();
//	void fdelete();
//	fconn();
//	//fquery();
//	//fadd();
//	//fupdate();
//	fdelete();
//	getchar();
//	return 0;
//}