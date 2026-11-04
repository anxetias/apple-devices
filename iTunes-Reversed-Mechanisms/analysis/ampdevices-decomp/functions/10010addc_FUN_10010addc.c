// name: FUN_10010addc
// address: 10010addc

void FUN_10010addc(long param_1,void *param_2,void *param_3,uint param_4,int param_5)

{
  if (param_5 != 0) {
    _memmove(param_2,(void *)(param_1 + 0xa050),(ulong)param_4 << 2);
    _memmove(param_3,(void *)(param_1 + 0xa150),(ulong)param_4 << 2);
    return;
  }
  return;
}

