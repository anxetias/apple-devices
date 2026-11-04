// name: FUN_1005fe14a
// address: 1005fe14a

/* WARNING: Removing unreachable block (ram,0x0001005fe18a) */
/* WARNING: Removing unreachable block (ram,0x0001005fe1a5) */

void FUN_1005fe14a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c(param_1,0x55);
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x60))(0,param_2,param_3);
  }
  return;
}

