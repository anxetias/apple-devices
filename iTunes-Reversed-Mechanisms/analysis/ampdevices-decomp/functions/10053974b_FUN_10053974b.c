// name: FUN_10053974b
// address: 10053974b

char * FUN_10053974b(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 1;
    FUN_1001c62d9(pcVar1,0x20);
    FUN_100538877(pcVar1,param_2);
    FUN_100538abf(pcVar1,param_3);
    *param_1 = '\x01';
  }
  return param_1 + 1;
}

