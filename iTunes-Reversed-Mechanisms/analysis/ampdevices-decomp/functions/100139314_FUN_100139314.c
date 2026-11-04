// name: FUN_100139314
// address: 100139314

undefined8 FUN_100139314(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = "bag://amd-finish-provisioning";
  if (*(int *)(param_2 + 0x1a0) == 0) {
    pcVar1 = "bag://md-finish-provisioning";
  }
  FUN_1001b7b04(param_1,pcVar1);
  return param_1;
}

