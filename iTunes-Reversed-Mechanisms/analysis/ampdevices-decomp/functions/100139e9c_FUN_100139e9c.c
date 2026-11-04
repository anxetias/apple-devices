// name: FUN_100139e9c
// address: 100139e9c

undefined8 FUN_100139e9c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = "bag://amd-sync-machine";
  if (*(int *)(param_2 + 0x1a0) == 0) {
    pcVar1 = "bag://md-sync-machine";
  }
  FUN_1001b7b04(param_1,pcVar1);
  return param_1;
}

