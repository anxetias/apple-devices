// name: FUN_1005fdf02
// address: 1005fdf02

/* WARNING: Removing unreachable block (ram,0x0001005fdf3a) */
/* WARNING: Removing unreachable block (ram,0x0001005fdf53) */

void FUN_1005fdf02(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c(param_1,0x4b);
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x40))(0,param_2);
  }
  return;
}

