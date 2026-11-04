// name: FUN_100170620
// address: 100170620

undefined8 FUN_100170620(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = _CFGetRetainCount();
    return uVar1;
  }
  return 0;
}

