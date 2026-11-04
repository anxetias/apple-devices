// name: FUN_1005fdf8c
// address: 1005fdf8c

/* WARNING: Removing unreachable block (ram,0x0001005fdfd0) */
/* WARNING: Removing unreachable block (ram,0x0001005fdfe2) */

undefined4 FUN_1005fdf8c(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1005fd93c(param_1,0x4b);
  uVar2 = 0x2365;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(lRam0000000000000000 + 0x48))(0,param_2);
  }
  return uVar2;
}

