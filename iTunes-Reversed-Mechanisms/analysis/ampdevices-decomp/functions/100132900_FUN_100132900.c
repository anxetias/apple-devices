// name: FUN_100132900
// address: 100132900

undefined8 FUN_100132900(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_10088fc68 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10088fc68);
    if (iVar1 != 0) {
      FUN_10013298c(&DAT_10088fc58,1);
      ___cxa_atexit(FUN_1001b7a50,&DAT_10088fc58,0x100000000);
      ___cxa_guard_release(&DAT_10088fc68);
    }
  }
  FUN_1001b7a5c(param_1,&DAT_10088fc58);
  return param_1;
}

