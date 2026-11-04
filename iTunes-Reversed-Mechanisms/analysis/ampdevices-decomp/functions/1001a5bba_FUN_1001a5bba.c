// name: FUN_1001a5bba
// address: 1001a5bba

ulong FUN_1001a5bba(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long local_28;
  undefined1 local_20 [16];
  undefined7 uVar4;
  
  FUN_1001a8bb0(&local_28,param_1);
  if (local_28 != 0) {
    FUN_1001ab45a(local_20,&local_28);
    cVar1 = FUN_1001b8428(local_20);
    if (cVar1 == '\0') {
      FUN_1001bd05c(local_20,0);
      iVar2 = FUN_1001ba026(local_20,"itunes");
      uVar4 = (undefined7)((ulong)&local_28 >> 8);
      uVar3 = CONCAT71(uVar4,1);
      if (iVar2 != 0) {
        iVar2 = FUN_1001ba026(local_20,"itms");
        if (iVar2 != 0) {
          iVar2 = FUN_1001ba026(local_20,"itmss");
          if (iVar2 != 0) {
            iVar2 = FUN_1001ba026(local_20,"music");
            if (iVar2 != 0) {
              iVar2 = FUN_1001ba026(local_20,"musics");
              if (iVar2 != 0) {
                iVar2 = FUN_1001ba026(local_20,"com.apple.tv");
                if (iVar2 != 0) {
                  iVar2 = FUN_1001ba026(local_20,"videos");
                  if (iVar2 != 0) {
                    iVar2 = FUN_1001ba026(local_20,"com.apple.watchlist");
                    uVar3 = CONCAT71(uVar4,iVar2 == 0);
                  }
                }
              }
            }
          }
        }
      }
      FUN_1001b7a50(local_20);
      FUN_1001ab3c4(&local_28);
      goto LAB_1001a5ccf;
    }
    FUN_1001b7a50(local_20);
  }
  FUN_1001ab3c4(&local_28);
  uVar3 = 0;
LAB_1001a5ccf:
  return uVar3 & 0xffffffff;
}

