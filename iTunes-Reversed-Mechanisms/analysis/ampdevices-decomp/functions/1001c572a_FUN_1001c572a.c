// name: FUN_1001c572a
// address: 1001c572a

undefined8 FUN_1001c572a(uint param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)FUN_1001c6429(0x18);
  *param_3 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffff94;
  }
  else {
    uVar3 = 8;
    if (8 < param_1) {
      uVar3 = param_1;
    }
    *puVar1 = 0x46697841;
    puVar1[1] = uVar3 + 7 & 0xfffffff8;
    puVar1[2] = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

