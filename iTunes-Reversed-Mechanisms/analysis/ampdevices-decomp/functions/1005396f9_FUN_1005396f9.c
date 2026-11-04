// name: FUN_1005396f9
// address: 1005396f9

char * FUN_1005396f9(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 1;
    FUN_1001c62d9(pcVar1,0x20);
    FUN_100538abf(pcVar1,param_2);
    FUN_100538abf(pcVar1,param_3);
    *param_1 = '\x01';
  }
  return param_1 + 1;
}

