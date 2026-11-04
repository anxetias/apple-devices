// name: FUN_10016dbda
// address: 10016dbda

void FUN_10016dbda(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  void *local_40;
  
  uVar2 = *param_3;
  iVar1 = *(int *)(param_3 + 1);
  pcVar5 = (char *)_CFStringGetCStringPtr(param_1,0x8000100);
  if (pcVar5 == (char *)0x0) {
    local_50 = param_2;
    uVar7 = _CFStringGetLength(param_1);
    uVar7 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
    local_58 = local_58 & 0xffffffffffffff00;
    FUN_10016f534(&local_48,uVar7,&local_58);
    local_58 = 0;
    uVar8 = _CFStringGetLength(param_1);
    _CFStringGetBytes(param_1,0,uVar8,0x8000100,0,0,local_48,uVar7,&local_58);
    pvVar4 = local_48;
    uVar3 = local_58;
    FUN_10016dd2e(uVar2,5);
    FUN_10016f2da(uVar2,pvVar4,uVar3);
    param_2 = local_50;
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
      param_2 = local_50;
    }
  }
  else {
    sVar6 = _strlen(pcVar5);
    FUN_10016dd2e(uVar2,5);
    FUN_10016f2da(uVar2,pcVar5,sVar6);
  }
  FUN_10016b747(param_2,uVar2,iVar1 + 1);
  return;
}

