// name: FUN_10014aaca
// address: 10014aaca

ulong FUN_10014aaca(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_30 [16];
  
  cVar1 = FUN_1001ab24a(param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_1001ab2ce(param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_1001ab2fa(param_3);
      if (cVar1 == '\0') {
        FUN_1001bb78a(local_30,"%@",*param_3);
        uVar3 = *(ulong *)(param_1 + 0x10);
        if (uVar3 < *(ulong *)(param_1 + 0x18)) {
          FUN_10014c368(uVar3,param_2,local_30);
          lVar4 = uVar3 + 0x10;
          *(long *)(param_1 + 0x10) = lVar4;
        }
        else {
          lVar4 = FUN_10014c272(param_1 + 8,param_2,local_30);
        }
        *(long *)(param_1 + 0x10) = lVar4;
        FUN_1001b7a50(local_30);
        goto LAB_10014ab7d;
      }
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10014c40f(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001ab042(local_30,param_3);
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 < *(ulong *)(param_1 + 0x18)) {
      FUN_10014c23c(uVar3,param_2,local_30);
      lVar4 = uVar3 + 0x10;
      *(long *)(param_1 + 0x10) = lVar4;
    }
    else {
      lVar4 = FUN_10014c146(param_1 + 8,param_2,local_30);
    }
    *(long *)(param_1 + 0x10) = lVar4;
    FUN_1001ab006(local_30);
LAB_10014ab7d:
    uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
  return uVar3 & 0xffffffff;
}

