// name: FUN_1005fe0b4
// address: 1005fe0b4

/* WARNING: Removing unreachable block (ram,0x0001005fe0f4) */
/* WARNING: Removing unreachable block (ram,0x0001005fe10f) */

void FUN_1005fe0b4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c(param_1,0x4b);
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x58))(0,param_2,param_3);
  }
  return;
}

