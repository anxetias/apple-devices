// name: FUN_1005fdc38
// address: 1005fdc38

/* WARNING: Removing unreachable block (ram,0x0001005fdc67) */
/* WARNING: Removing unreachable block (ram,0x0001005fdc80) */

void FUN_1005fdc38(void)

{
  char cVar1;
  
  cVar1 = FUN_1005fd93c();
  if (cVar1 != '\0') {
    (**(code **)(lRam0000000000000000 + 0x28))();
  }
  return;
}

