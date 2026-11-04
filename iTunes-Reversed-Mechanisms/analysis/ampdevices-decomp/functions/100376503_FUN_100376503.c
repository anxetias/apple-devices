// name: FUN_100376503
// address: 100376503

undefined4 FUN_100376503(void)

{
  undefined4 uVar1;
  code *in_RCX;
  undefined8 in_R8;
  undefined4 local_48 [8];
  
  uVar1 = FUN_1003763cb();
  if (in_RCX != (code *)0x0) {
    FUN_1001c62d9(local_48,0x20);
    local_48[0] = uVar1;
    (*in_RCX)(local_48,in_R8);
  }
  return uVar1;
}

