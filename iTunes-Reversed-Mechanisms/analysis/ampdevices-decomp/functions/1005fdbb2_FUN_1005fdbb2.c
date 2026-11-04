// name: FUN_1005fdbb2
// address: 1005fdbb2

/* WARNING: Removing unreachable block (ram,0x0001005fdbe5) */
/* WARNING: Removing unreachable block (ram,0x0001005fdbfe) */

void FUN_1005fdbb2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c();
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x20))(0,param_3);
  }
  return;
}

