// name: FUN_10011d40e
// address: 10011d40e

void FUN_10011d40e(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
                  byte param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_60;
  undefined4 local_48;
  int local_44;
  long local_40;
  uint local_34;
  
  bVar1 = *(byte *)(param_5 + 0x19f4);
  uVar5 = (ulong)*(byte *)(param_5 + 0x19f5);
  local_48 = 0;
  if (uVar5 != 0) {
    uVar4 = (ulong)((uint)bVar1 * 4);
    local_60 = uVar4 + param_4 + -4;
    local_44 = 0;
    local_34 = (uint)param_6;
    local_40 = param_5;
    do {
      uVar2 = *param_3;
      uVar3 = *param_2;
      (**(code **)(*param_1 + 0x10))
                (param_1,param_2,param_3,*(undefined1 *)(local_40 + 0x19f7),local_44,&local_48,
                 local_34);
      FUN_100106618(param_1 + 1,uVar3,uVar2,local_40);
      FUN_1001067ac(param_1 + 1,uVar3,uVar2,local_40,local_60);
      (**(code **)(*param_1 + 0x18))(param_1,*param_2,*param_3,bVar1,local_34);
      local_44 = local_44 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      local_60 = local_60 + uVar4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

