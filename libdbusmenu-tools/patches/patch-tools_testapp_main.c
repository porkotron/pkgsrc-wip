$NetBSD$

Remove deprecated function.

--- tools/testapp/main.c.orig	2012-10-03 15:54:22.000000000 +0000
+++ tools/testapp/main.c
@@ -135,8 +135,6 @@ name_lost (GDBusConnection * connection,
 
 int main (int argc, char ** argv)
 {
-	g_type_init();
-
 	if (argc != 2) {
 		g_warning(USAGE);
 		return 1;
