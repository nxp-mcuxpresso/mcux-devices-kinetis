# CLOCK

## [2.3.2]

- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 3.1.

## [2.3.1]

- Bug Fixes
  - Fixed MISRA C-2012 rule 10.1, rule 10.4, rule 10.8 and so on.

## [2.3.0]

- New feature:
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.0]

- New feature
  - Adding new API CLOCK_DelayAtLeastUs() to implemente a delay fucntion which allow
    users set delay in unit of microsecond.

## [2.1.1]

- Improvement:
  - Change reserved bit fields in _scg_sys_clk_config struct into unnamed bit fields.

## [2.1.0]

- Other Changes:
  - Merge fsl_scg and fsl_osc into fsl_clock.

## [2.0.0]

- Initial version.
