$NetBSD: patch-modules_gui_qt4_components_extended__panels.cpp,v 1.1 2015/05/01 06:24:13 idleroux Exp $

--- modules/gui/qt4/components/extended_panels.cpp.orig	2014-11-16 18:57:59.000000000 +0000
+++ modules/gui/qt4/components/extended_panels.cpp
@@ -1583,7 +1583,7 @@ void SyncControls::update()
 {
     b_userAction = false;
 
-    int64_t i_delay;
+    putime_t i_delay;
     if( THEMIM->getInput() )
     {
         i_delay = var_GetTime( THEMIM->getInput(), "audio-delay" );
@@ -1600,7 +1600,7 @@ void SyncControls::advanceAudio( double 
 {
     if( THEMIM->getInput() && b_userAction )
     {
-        int64_t i_delay = f_advance * 1000000;
+        putime_t i_delay = f_advance * 1000000;
         var_SetTime( THEMIM->getInput(), "audio-delay", i_delay );
     }
 }
@@ -1609,7 +1609,7 @@ void SyncControls::advanceSubs( double f
 {
     if( THEMIM->getInput() && b_userAction )
     {
-        int64_t i_delay = f_advance * 1000000;
+        putime_t i_delay = f_advance * 1000000;
         var_SetTime( THEMIM->getInput(), "spu-delay", i_delay );
     }
 }