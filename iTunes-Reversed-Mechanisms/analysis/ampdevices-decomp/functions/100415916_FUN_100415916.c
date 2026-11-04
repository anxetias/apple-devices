// name: FUN_100415916
// address: 100415916

void FUN_100415916(char *param_1)

{
  if ((*param_1 == '\x01') && (*(int *)(param_1 + 0x10) == 0)) {
    FUN_1004152d5(param_1 + 8,0);
  }
  *param_1 = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  return;
}

