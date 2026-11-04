// name: FUN_1005fe266
// address: 1005fe266

/* WARNING: Removing unreachable block (ram,0x0001005fe2a8) */
/* WARNING: Removing unreachable block (ram,0x0001005fe2ba) */

undefined4 FUN_1005fe266(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1005fd93c(param_1,0x4b);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(lRam0000000000000000 + 0x70))(0,param_2);
  }
  return uVar2;
}

