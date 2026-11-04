// name: FUN_10016bf46
// address: 10016bf46

undefined4 FUN_10016bf46(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  runtime_error *this;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pbVar3 = (byte *)*param_2;
  while (((ulong)*pbVar3 < 0x21 && ((0x100002600U >> ((ulong)*pbVar3 & 0x3f) & 1) != 0))) {
    pbVar3 = pbVar3 + 1;
  }
  *param_2 = (long)pbVar3;
  if (*pbVar3 != 0) {
    FUN_10016c094(param_1,param_2);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    return *(undefined4 *)(param_1 + 0x30);
  }
  this = (runtime_error *)___cxa_allocate_exception(0x20);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  std::runtime_error::runtime_error(this,"kParseErrorDocumentEmpty");
  *(undefined ***)this = &PTR_FUN_10083c0c0;
  *(undefined4 *)(this + 0x10) = 1;
  *(long *)(this + 0x18) = lVar1 - lVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,&PTR_DAT_10083c098,FUN_10016c08a);
}

