// name: FUN_100177051
// address: 100177051

undefined8 FUN_100177051(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_44 [4];
  undefined8 *local_40;
  uint local_34;
  
  sVar3 = FUN_10015b9d1(param_1,0,0x63686170);
  puVar5 = (uint *)FUN_1001c6429((ulong)((int)sVar3 - 1) * 8 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006830c0(uVar7);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffff94;
  }
  else {
    *puVar5 = (int)sVar3;
    local_40 = param_3;
    iVar4 = FUN_10015bb96(param_1,0,0x63686170,1,&local_34);
    if (iVar4 != 0) {
      sVar3 = 1;
      do {
        lVar6 = FUN_10015c089(param_1,iVar4,param_2,1,local_44);
        if (lVar6 != 0) {
          uVar1 = puVar5[1];
          if (*puVar5 <= uVar1) goto LAB_10017714c;
          *(short *)(puVar5 + (ulong)uVar1 * 2 + 2) = sVar3;
          puVar5[(ulong)uVar1 * 2 + 3] = local_34;
          puVar5[1] = uVar1 + 1;
        }
        sVar3 = sVar3 + 1;
        iVar4 = FUN_10015bb96(param_1,0,0x63686170,(int)sVar3,&local_34);
      } while (iVar4 != 0);
    }
    if (puVar5[1] != 0) {
      uVar7 = 0;
      param_3 = local_40;
      goto LAB_100177160;
    }
LAB_10017714c:
    uVar7 = 0xffffffce;
    param_3 = local_40;
  }
  FUN_1001c64c1(puVar5);
  puVar5 = (uint *)0x0;
LAB_100177160:
  *param_3 = puVar5;
  return uVar7;
}

