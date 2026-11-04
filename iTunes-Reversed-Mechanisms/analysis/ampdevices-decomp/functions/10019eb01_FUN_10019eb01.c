// name: FUN_10019eb01
// address: 10019eb01

void FUN_10019eb01(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  int local_38;
  undefined8 local_30;
  
  if ((((*(byte *)((long)param_1 + 0x44) & 0x80) != 0) && (*(char *)((long)param_1 + 0x101) == '\0')
      ) && (lVar2 = FUN_1001731d8(*param_1,*(undefined8 *)
                                            PTR__kCFStreamPropertyHTTPResponseHeader_10082d668),
           lVar2 != 0)) {
    *(undefined1 *)((long)param_1 + 0x101) = 1;
    uVar3 = FUN_100199671(lVar2);
    param_1[0x16] = uVar3;
    if (param_1[0x19] != 0) {
      FUN_1001c62d9(&local_40,0x20);
      local_40 = lVar2;
      local_38 = FUN_100171ce8(lVar2);
      local_30 = param_1[0x16];
      if ((local_38 != 0x191) && (local_38 != 0x197)) {
        (*(code *)param_1[0x19])(0x68656472,&local_40,0,param_1 + 0x1a);
      }
    }
    FUN_10017060f(lVar2);
    if (param_1[0x21] == 0) {
      lVar2 = FUN_1001c64e6(param_1[0x22]);
      param_1[0x21] = lVar2;
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10069b574(uVar3);
        }
        FUN_1001782e9(0,0);
        FUN_10019e085(param_1,1,0xffffff94);
      }
    }
  }
  return;
}

