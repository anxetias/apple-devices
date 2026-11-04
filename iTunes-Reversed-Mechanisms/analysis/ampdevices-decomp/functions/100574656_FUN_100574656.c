// name: FUN_100574656
// address: 100574656

uint FUN_100574656(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40 [5];
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_48 = *(undefined8 *)(param_2 + 8);
  uVar4 = 0;
  cVar2 = (**(code **)(*param_1 + 0x80))(param_1,0x66726d61,&local_68,0,local_40);
  if (cVar2 != '\0') {
    puVar3 = (uint *)(**(code **)(*param_1 + 0x70))(param_1,local_40[0]);
    uVar1 = *puVar3;
    uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar1 == 0x3f3f3f3f) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

