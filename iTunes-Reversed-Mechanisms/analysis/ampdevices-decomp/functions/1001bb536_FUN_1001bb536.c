// name: FUN_1001bb536
// address: 1001bb536

undefined8 FUN_1001bb536(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = "false";
  if (param_2 != 0) {
    pcVar1 = "true";
  }
  FUN_1001b7a9a(param_1,pcVar1,param_2 ^ 5);
  return param_1;
}

