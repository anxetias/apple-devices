// name: FUN_1001dfdef
// address: 1001dfdef

void FUN_1001dfdef(byte *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_2 & 0xff;
    if ((param_3 + uVar1) - 1 <= (uint)*param_1) {
      FUN_1001c631b(param_1 + (param_3 + uVar1),param_1 + uVar1,
                    (*param_1 - ((char)param_2 + param_3)) + '\x01');
      *param_1 = *param_1 - param_3;
    }
  }
  return;
}

