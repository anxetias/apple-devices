// name: FUN_1001bdbd4
// address: 1001bdbd4

undefined8 FUN_1001bdbd4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar2 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  uVar1 = _CFStringCreateWithBytesNoCopy(0,(long)param_1 + 0xc,*param_1,0x8000100,0,uVar2);
  local_38 = uVar1;
  local_30 = _CFStringCreateWithCStringNoCopy(0,param_2,0x8000100,uVar2);
  uVar2 = _CFStringCompare(uVar1,local_30,param_3);
  FUN_10016d588(&local_30);
  FUN_10016d588(&local_38);
  return uVar2;
}

