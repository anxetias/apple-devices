// name: FUN_1001bdad4
// address: 1001bdad4

undefined8 FUN_1001bdad4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a2914(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == param_1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_2;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
    uVar4 = _CFStringCreateWithBytesNoCopy(0,(long)param_1 + 0xc,*param_1,0x8000100,0,uVar1);
    local_40 = uVar4;
    local_38 = _CFStringCreateWithBytesNoCopy(0,(long)param_2 + 0xc,uVar3,0x8000100,0,uVar1);
    uVar3 = _CFStringCompare(uVar4,local_38,param_3);
    FUN_10016d588(&local_38);
    FUN_10016d588(&local_40);
  }
  return uVar3;
}

