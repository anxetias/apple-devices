// name: _recvfrom
// address: 1006cef12

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _recvfrom(int param_1,void *param_2,size_t param_3,int param_4,sockaddr *param_5,
                 socklen_t *param_6)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__recvfrom_10082d118)();
  return sVar1;
}

