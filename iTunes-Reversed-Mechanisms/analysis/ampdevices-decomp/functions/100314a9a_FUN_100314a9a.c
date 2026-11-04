// name: FUN_100314a9a
// address: 100314a9a

void FUN_100314a9a(long param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  
  if (param_2 == 0x75706368) {
    cVar1 = FUN_100159cf4(param_3,PTR_cf_smartShuffleOptions_100854aa8);
    cVar2 = FUN_100159cf4(param_3,PTR_cf_keepAlbumsTogether_100854a78);
    if ((cVar2 != '\0') || (cVar1 != '\0')) {
      for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
        FUN_100314020(lVar3);
        FUN_10048455b(lVar3,0);
        FUN_1003142ca(lVar3);
      }
    }
    cVar1 = FUN_100159cf4(param_3,PTR_cf_groupCompilationsInBrowse_100854a70);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_100159cf4(param_3,PTR_cf_useAlbumArtistsInBrowse_100854a80), cVar1 == '\0')) {
      return;
    }
    for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
      FUN_10037ee15(lVar3,0x2afa);
    }
  }
  else if ((param_2 == 0x706d6572) && (*(short *)(param_1 + 0x27b0) != 0)) {
    *param_3 = 1;
  }
  return;
}

