From 753a1b61c02ed2d7de58bb7999766465d82f758a Mon Sep 17 00:00:00 2001
From: "Tobias C. Berner" <tcberner@FreeBSD.org>
Date: Sun, 24 Mar 2019 08:53:10 +0100
Subject: [PATCH] Remove duplicate include of asm/types.h

- it is only required on Linux and already included below.
--- src/lib/external/media_ctrl/mediactrl.c.orig	2019-04-04 17:11:51 UTC
+++ src/lib/external/media_ctrl/mediactrl.c
@@ -18,7 +18,6 @@
  * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
  */
 
-#include <asm/types.h>
 #include <errno.h>
 #include <fcntl.h>
 #include <stdint.h>
