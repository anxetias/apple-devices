// name: FUN_10046f576
// address: 10046f576

undefined8 FUN_10046f576(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)_CMBaseObjectGetDerivedStorage();
  if (((piVar1 == (int *)0x0) || (*piVar1 != 0x62797473)) || (*(long *)(piVar1 + 2) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001737db(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0);
    _CFStringAppendFormat(uVar2,0,&cf_<ITCMByteStream>);
  }
  return uVar2;
}

