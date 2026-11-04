// name: FUN_10043b340
// address: 10043b340

undefined4 FUN_10043b340(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((int)param_2 < 0x736c7972) {
    if (((param_2 != 0x72636f6d) && (param_2 != 0x73617274)) && (param_2 != 0x73636f6d)) {
      return 0xffffffce;
    }
  }
  else if (((param_2 != 0x736c7972) && (param_2 != 0x73756669)) && (param_2 != 0x7374696e)) {
    return 0xffffffce;
  }
  *(code ***)(param_3 + 0x30) = &local_58;
  iVar1 = FUN_10046ef37(*(undefined4 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  uVar2 = 0xffffffd1;
  if (iVar1 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if ((*(byte *)(param_3 + 0x28) & 2) != 0) {
      local_58 = FUN_10043b085;
      uStack_40 = (ulong)param_2;
    }
    uVar2 = FUN_10043a8b3(param_1,(ulong)param_2,param_3);
    FUN_1001ceb24(&local_58,0x6470726d,0,0,0);
  }
  return uVar2;
}

