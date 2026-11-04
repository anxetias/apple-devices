// name: FUN_1005f4971
// address: 1005f4971

uint FUN_1005f4971(uint *param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_50 [8];
  uint *local_48;
  uint *local_40;
  uint local_38;
  uint local_34;
  
  uVar1 = *(undefined8 *)(param_1 + 0x642);
  uVar4 = param_1[0x62c];
  uVar3 = FUN_1001ceb24(param_1 + 0x64c,0x6370726d,0,*(undefined8 *)(param_1 + 0x646),0);
  if (uVar3 == 0) {
    local_40 = param_1 + 0x640;
    local_48 = param_1 + 0x10;
    local_38 = uVar4;
    do {
      uVar4 = FUN_10046d7bc(local_48,uVar1,local_38,&local_34,local_50);
      if (local_34 != 0) {
        param_1[0x641] = param_1[0x612] * local_34;
        uVar3 = (**(code **)(param_1 + 0x64a))(param_1,local_40);
        if (uVar3 != 0) break;
      }
      uVar3 = uVar4;
      if (uVar4 != 0) break;
      uVar3 = FUN_1001ceb24(param_1 + 0x64c,0x7570726d,*(undefined8 *)(param_1 + 0x644),
                            *(undefined8 *)(param_1 + 0x646),0);
      *(ulong *)(param_1 + 0x644) = *(long *)(param_1 + 0x644) + (ulong)local_34;
    } while (uVar3 == 0);
  }
  param_1[0x648] = uVar3;
  if ((((*param_1 & 4) != 0) || ((*param_1 & 8) != 0)) && (uVar3 == 0xffffff80)) {
    param_1[0x648] = 0;
  }
  cVar2 = FUN_1001e96b8(param_1 + 0x658);
  if (cVar2 == '\0') {
    if (param_1[0x65c] != 0) {
      FUN_1001b16d1();
    }
  }
  else {
    FUN_1001e9809(param_1 + 0x658);
  }
  return uVar3;
}

