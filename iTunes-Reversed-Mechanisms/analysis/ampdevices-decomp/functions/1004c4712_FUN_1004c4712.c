// name: FUN_1004c4712
// address: 1004c4712

void FUN_1004c4712(long *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x50a) == '\x01') {
    (**(code **)(*param_1 + 0x388))(param_1);
  }
  if ((char)param_1[0xb0] == '\x01') {
    (**(code **)(*param_1 + 0x3c0))(param_1);
  }
  cVar1 = (**(code **)(*param_1 + 0x368))(param_1);
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004c4768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x360))(param_1);
  return;
}

