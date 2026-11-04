// name: _send
// address: 1006cef42

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _send(int param_1,void *param_2,size_t param_3,int param_4)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__send_10082d150)();
  return sVar1;
}

