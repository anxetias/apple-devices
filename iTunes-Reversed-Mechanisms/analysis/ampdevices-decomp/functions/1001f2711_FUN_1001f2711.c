// name: FUN_1001f2711
// address: 1001f2711

void FUN_1001f2711(long param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  char local_2a [2];
  
  local_2a[0] = '\n';
  local_2a[1] = '\0';
  pcVar1 = *(code **)(param_1 + 0x40);
  sVar3 = _strlen(param_2);
  iVar2 = (*pcVar1)(param_1,param_2,sVar3,*(undefined8 *)(param_1 + 0x48));
  if (param_3 != 0 && iVar2 == 0) {
    pcVar1 = *(code **)(param_1 + 0x40);
    sVar3 = _strlen(local_2a);
    (*pcVar1)(param_1,local_2a,sVar3,*(undefined8 *)(param_1 + 0x48));
  }
  return;
}

