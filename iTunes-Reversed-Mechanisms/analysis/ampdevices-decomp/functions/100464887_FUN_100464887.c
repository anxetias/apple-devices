// name: FUN_100464887
// address: 100464887

undefined8 FUN_100464887(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  lVar1 = FUN_100166b7f(param_1,*(undefined8 *)PTR__kCGImagePropertyMakerAppleDictionary_10082e888);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_18 = FUN_100172473(DAT_1008c4d90,"17",0x600);
    uVar2 = FUN_100166c1b(lVar1,local_18);
    uVar2 = FUN_1001705fc(uVar2);
    FUN_10016d588(&local_18);
  }
  return uVar2;
}

