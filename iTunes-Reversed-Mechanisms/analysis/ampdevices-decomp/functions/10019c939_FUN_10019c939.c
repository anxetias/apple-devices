// name: FUN_10019c939
// address: 10019c939

int FUN_10019c939(int *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x68746463)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100699de2(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    iVar3 = FUN_10019c724(param_1);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100699c14(iVar3,uVar4);
      }
    }
    if (*(long *)(param_1 + 0x14) != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100699c80(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100699cf6(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    lVar1 = *(long *)(param_1 + 0x26);
    if (lVar1 != 0) {
      cVar2 = FUN_1001cdcc9("http-no-single-loader-thread",0);
      if (cVar2 == '\0') {
        if (DAT_100890758 != lVar1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_100699d6c(uVar4);
          }
          FUN_1001782e9(0,1);
        }
      }
      else {
        FUN_1001e9de0(&DAT_100890710);
        FUN_10019f145(&DAT_1008906e0,&DAT_1008906e8,lVar1);
        FUN_10019ed28(&DAT_1008906f0,&DAT_1008906f8,lVar1);
        FUN_1001e9eb9(&DAT_100890710);
      }
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    FUN_1001e9d75(param_1 + 2);
    FUN_1001c64c1(param_1);
  }
  return iVar3;
}

