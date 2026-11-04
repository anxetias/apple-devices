// name: FUN_1001782b2
// address: 1001782b2

uint FUN_1001782b2(uint param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    uVar1 = FUN_1001cdb4a(PTR_s_debugAssertCategoriesEnabled_10088f598,0,0);
    if (param_1 == 1) {
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & param_1) != 0);
    }
  }
  return uVar1 & 0xffffff01;
}

