// name: FUN_100291c54
// address: 100291c54

undefined8
FUN_100291c54(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_60 [9];
  byte local_3c [4];
  undefined4 *local_38;
  
  if (param_1 < 0x48545450) {
    if ((param_1 != 0x44574e4c) && (param_1 != 0x46494c45)) {
      return 0xffffffce;
    }
  }
  else {
    if ((param_1 == 0x48545450) || (param_1 == 0x53485244)) {
      *param_6 = 0x110c;
      return 0;
    }
    if (param_1 != 0x4d46494c) {
      return 0xffffffce;
    }
  }
  local_38 = param_6;
  uVar1 = FUN_1002934ca(param_1,param_2,param_3 + 0x1030);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 6;
  FUN_1001c62d9(local_60,0x20);
  local_60[0] = 0x61727477;
  uVar1 = FUN_10029650a(param_1,param_2,param_3,param_4,param_5,local_60,0,0,0,local_3c,0,param_7);
  if (((int)uVar1 == 0) && ((local_3c[0] & 1) != 0)) {
    *(byte *)(param_3 + 0x1038) = *(byte *)(param_3 + 0x1038) | 2;
  }
  *(byte *)(param_3 + 0x1038) = *(byte *)(param_3 + 0x1038) | 1;
  if (param_1 < 0x48545450) {
    if (param_1 == 0x44574e4c) {
      uVar2 = 0x13d;
      goto LAB_100291da9;
    }
    bVar3 = param_1 == 0x46494c45;
  }
  else {
    if (param_1 == 0x48545450) {
      uVar2 = 0x110c;
      goto LAB_100291da9;
    }
    bVar3 = param_1 == 0x4d46494c;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x113d;
  }
LAB_100291da9:
  *local_38 = uVar2;
  return uVar1;
}

