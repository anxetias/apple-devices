// name: FUN_1005fe020
// address: 1005fe020

/* WARNING: Removing unreachable block (ram,0x0001005fe064) */
/* WARNING: Removing unreachable block (ram,0x0001005fe076) */

undefined4 FUN_1005fe020(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1005fd93c(param_1,0x4b);
  uVar2 = 0x2365;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(lRam0000000000000000 + 0x50))(0,param_2);
  }
  return uVar2;
}

