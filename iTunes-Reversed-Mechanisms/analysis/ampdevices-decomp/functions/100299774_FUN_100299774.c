// name: FUN_100299774
// address: 100299774

undefined8 FUN_100299774(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  ulong local_40;
  undefined4 local_34;
  
  local_40 = 4;
  iVar3 = (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,&local_40,&local_34);
  if ((iVar3 == 0) && (local_40 == 4)) {
    *param_4 = *param_4 + 4;
    bVar6 = true;
    lVar4 = 0;
    do {
      uVar1 = local_34;
      uVar5 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
              local_34 << 0x18;
      if (0xffdfffff < uVar5) {
        FUN_10026b6a9(uVar5,param_3);
        iVar3 = FUN_10026b3e0(param_3,param_3 + 0x10);
        if ((iVar3 == 0) && (cVar2 = FUN_100271d6f(param_3 + 0x10,param_2), cVar2 != '\0')) {
          *param_4 = *param_4 - lVar4;
          local_40 = (ulong)*(uint *)(param_3 + 0x24);
          iVar3 = (**(code **)(*(long *)*param_1 + 0xa8))
                            ((long *)*param_1,&local_40,*(undefined8 *)(param_3 + 0x50));
          uVar1 = *(uint *)(param_3 + 0x24);
          *param_4 = *param_4 + (ulong)uVar1;
          if (iVar3 != 0) {
            return 0xffffffd9;
          }
          if (local_40 != uVar1) {
            return 0xffffffd9;
          }
          return 0;
        }
      }
      if ((int)lVar4 == -0x10001) {
        return 0xffffffce;
      }
      if (bVar6) {
        FUN_100270a1c(param_3);
      }
      local_34 = uVar1 >> 8;
      local_40 = 1;
      iVar3 = (**(code **)(*(long *)*param_1 + 0xa8))
                        ((long *)*param_1,&local_40,(long)&local_34 + 3);
      if (iVar3 != 0) {
        return 0xffffffd9;
      }
      lVar4 = lVar4 + -1;
      bVar6 = false;
    } while (local_40 == 1);
  }
  return 0xffffffd9;
}

