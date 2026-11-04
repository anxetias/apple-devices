// name: FUN_1003df2de
// address: 1003df2de

bool FUN_1003df2de(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_20;
  int local_1c;
  
  if (param_1 == 0x46494c45) {
    local_20 = 0;
    bVar3 = false;
    uVar1 = FUN_1003b73be(0x46494c45,param_2,0,&local_20);
    iVar2 = FUN_100466aac("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                          ,uVar1,local_20,&local_1c,0,0xf);
    if (iVar2 == 0) {
      bVar3 = local_1c == 0x41494646 || local_1c == 0x41494643;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

