# CLOCK

## [2.4.0]

- Bug Fixes
  - Removed unimplemented kSCG_AsyncDiv1Clk.

## [2.3.1]

- Bug Fixes
  - Fixed MISRA C-2012 rule 10.1, rule 10.4, rule 10.8, rule 15.5 and so on.

## [2.3.0]

- New Features
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.0]

- New Features
  - Added new API CLOCK_DelayAtLeastUs() implemented by DWT to allow users set delay in unit of microsecond.

## [2.1.2]

- Bug Fixes
  - Fixed OSC32 can not use EXTAL32 clock source issue.

## [2.1.1]

- Improvements
  - Changed reserved bit fields in _scg_sys_clk_config struct into unnamed bit fields.

## [2.1.0]

- Other Changes
  - Merged fsl_scg and fsl_osc into fsl_clock.

## [2.0.0]

- Initial version.
