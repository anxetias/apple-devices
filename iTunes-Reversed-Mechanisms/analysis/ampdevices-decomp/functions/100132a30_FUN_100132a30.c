// name: FUN_100132a30
// address: 100132a30

undefined8 FUN_100132a30(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_10088fc80 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10088fc80);
    if (iVar1 != 0) {
      FUN_10013298c(&DAT_10088fc70,0);
      ___cxa_atexit(FUN_1001b7a50,&DAT_10088fc70,0x100000000);
      ___cxa_guard_release(&DAT_10088fc80);
    }
  }
  FUN_1001b7a5c(param_1,&DAT_10088fc70);
  return param_1;
}

